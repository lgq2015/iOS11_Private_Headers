/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTConnectionUtilities : NSObject

+ (id)MD5HeaderValueForTask:(id)arg1;
+ (id)acceptLanguage;
+ (void)addBodyToRequest:(id)arg1 body:(id)arg2 gzip:(bool)arg3 signature:(id)arg4;
+ (void)addStandardHeadersToRequest:(id)arg1 sessionID:(id)arg2;
+ (unsigned long long)allowCellularSizeThreshold;
+ (bool)didEncounterNetworkDisconnectionError:(id)arg1;
+ (id)getRequestForEndpoint:(id)arg1 sessionID:(id)arg2 allowsCellularAccess:(bool)arg3;
+ (id)getServerLoggingSelection;
+ (bool)isGzipEnabled;
+ (bool)isValidResponse:(id)arg1;
+ (id)postRequestForEndpoint:(id)arg1 sessionID:(id)arg2 allowsCellularAccess:(bool)arg3;
+ (id)postRequestForEndpoint:(id)arg1 sessionID:(id)arg2 allowsCellularAccess:(bool)arg3 timeout:(double)arg4;
+ (id)postRequestForEndpoint:(id)arg1 signature:(id)arg2 fileURL:(id)arg3 fileSequence:(id)arg4 totalFiles:(id)arg5 sessionID:(id)arg6 allowsCellularAccess:(bool)arg7;
+ (bool)relaxTimeouts;
+ (unsigned long long)rootOfTrust;
+ (bool)trustIsValidWithProtectionSpace:(id)arg1 rootOfTrust:(unsigned long long)arg2;
+ (bool)useChunkedTransferEncoding;

@end
