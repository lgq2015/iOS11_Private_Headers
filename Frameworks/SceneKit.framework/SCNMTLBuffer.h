/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLBuffer : NSObject {
    <MTLBuffer> * _buffer;
    id  _dataSource;
    long long  _offset;
    long long  _usedCount;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic, readonly) void*contents;
@property (nonatomic) id dataSource;
@property (nonatomic) long long offset;
@property long long usedCount;

- (id)buffer;
- (void*)contents;
- (id)dataSource;
- (void)dealloc;
- (long long)decrementUsedCount;
- (void)incrementUsedCount;
- (long long)offset;
- (void)setBuffer:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setOffset:(long long)arg1;
- (void)setUsedCount:(long long)arg1;
- (long long)usedCount;

@end
