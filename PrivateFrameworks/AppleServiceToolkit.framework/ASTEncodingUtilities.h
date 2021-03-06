/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTEncodingUtilities : NSObject

+ (id)MD5ForData:(id)arg1;
+ (id)MD5ForFileHandle:(id)arg1;
+ (id)MD5ForString:(id)arg1;
+ (id)jsonSerializeObject:(id)arg1 error:(id*)arg2;
+ (id)parseJSONResponseWithData:(id)arg1 error:(id*)arg2;
+ (id)uuidHashFromString:(id)arg1;

@end
