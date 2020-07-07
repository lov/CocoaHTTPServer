/**
 * The HTTPMessage class is a simple Objective-C wrapper around Apple's CFHTTPMessage class.
**/

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
  // Note: You may need to add the CFNetwork Framework to your project
  #import <CFNetwork/CFNetwork.h>
#endif

#define HTTPVersion1_0  ((NSString *)kCFHTTPVersion1_0)
#define HTTPVersion1_1  ((NSString *)kCFHTTPVersion1_1)


@interface HTTPMessage : NSObject
{
	CFHTTPMessageRef message;
}

+ (nonnull instancetype)emptyRequest;

- (instancetype _Nullable )initRequestWithMethod:(NSString * _Nullable)method URL:(NSURL * _Nullable)url version:(NSString * _Nullable)version;

- (instancetype _Nullable )initResponseWithStatusCode:(NSInteger)code description:(NSString * _Nullable)description version:(NSString * _Nullable)version;

- (BOOL)appendData:(NSData * _Nullable)data;

- (BOOL)isHeaderComplete;

- (NSString * _Nullable)version;

- (NSString * _Nullable)method;
- (NSURL * _Nullable)url;

- (NSInteger)statusCode;

- (NSDictionary * _Nullable)allHeaderFields;
- (NSString * _Nullable)headerField:(NSString * _Nullable)headerField;

- (void)setHeaderField:(NSString * _Nullable)headerField value:(NSString * _Nullable)headerFieldValue;

- (NSData * _Nullable)messageData;

- (NSData * _Nullable)body;
- (void)setBody:(NSData * _Nullable)body;

@end
