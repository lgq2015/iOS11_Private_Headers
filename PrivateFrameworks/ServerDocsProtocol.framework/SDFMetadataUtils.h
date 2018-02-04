/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFMetadataUtils : NSObject

+ (id)metadataForDirectoryContentsFile:(id)arg1;
+ (bool)setMetadataOnURL:(id)arg1 keyedValues:(id)arg2 error:(id*)arg3;
+ (bool)setTimespecForFD:(int)arg1 commonattr:(unsigned int)arg2 timespec:(struct timespec { long long x1; long long x2; })arg3 error:(id*)arg4;

@end
