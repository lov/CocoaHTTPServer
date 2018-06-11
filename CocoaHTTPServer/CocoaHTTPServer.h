//
//  CocoaHTTPServer.h
//  CocoaHTTPServer
//
//  Copyright (c) 2011, Deusty, LLC
//
//  This is just robbiehanson/CocoaHTTPServer wrapped in a modern Xcode project that exposes a
//  module called CocoaHTTPServer.
//

#import <Cocoa/Cocoa.h>

//! Project version number for CocoaHTTPServer.
FOUNDATION_EXPORT double CocoaHTTPServerVersionNumber;

//! Project version string for CocoaHTTPServer.
FOUNDATION_EXPORT const unsigned char CocoaHTTPServerVersionString[];

#import <CocoaHTTPServer/HTTPServer.h>
#import <CocoaHTTPServer/HTTPConnection.h>
#import <CocoaHTTPServer/HTTPMessage.h>
#import <CocoaHTTPServer/HTTPAuthenticationRequest.h>
#import <CocoaHTTPServer/HTTPResponse.h>
// Problematic because it would expose DDLog.h which should probably be another framework itself...
// #import <CocoaHTTPServer/HTTPLogging.h>
#import <CocoaHTTPServer/WebSocket.h>

#import <CocoaHTTPServer/HTTPAsyncFileResponse.h>
#import <CocoaHTTPServer/HTTPRedirectResponse.h>
#import <CocoaHTTPServer/HTTPDataResponse.h>
#import <CocoaHTTPServer/HTTPFileResponse.h>
#import <CocoaHTTPServer/HTTPDynamicFileResponse.h>
#import <CocoaHTTPServer/HTTPErrorResponse.h>
