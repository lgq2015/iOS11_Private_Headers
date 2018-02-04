/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLDataChunkRaw : PMLDataChunk

@property (nonatomic, readonly) NSData *data;

+ (id)chunkWithData:(id)arg1;
+ (unsigned int)dataChunkType;

- (id)data;

@end