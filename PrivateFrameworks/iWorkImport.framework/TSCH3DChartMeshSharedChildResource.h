/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent> {
    struct DataBufferInfo { 
        int componentType; 
        unsigned long long components; 
        unsigned long long count; 
        unsigned long long byteSize; 
        unsigned long long componentByteSize; 
        unsigned long long elementByteSize; 
    }  mBufferInfo;
    int  mCaching;
    bool  mChildRegenerated;
    TSCH3DChartMeshResources * mParent;
    unsigned long long  mResourceIdentifier;
}

@property (readonly) struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } bufferInfo;
@property (nonatomic) int caching;
@property (nonatomic) bool childRegenerated;
@property (nonatomic, readonly) unsigned long long resourceIdentifier;

+ (id)resourceWithParent:(id)arg1;

- (id).cxx_construct;
- (struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })bufferInfo;
- (int)caching;
- (bool)childRegenerated;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (unsigned long long)resourceIdentifier;
- (void)setCaching:(int)arg1;
- (void)setChildRegenerated:(bool)arg1;

@end
