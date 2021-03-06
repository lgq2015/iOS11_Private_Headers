/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAJobWorkInfo : NSObject {
    NSString * _assetLocalIdentifier;
    int  _workerFlags;
}

@property (nonatomic, readonly, copy) NSString *assetLocalIdentifier;
@property (nonatomic) int workerFlags;

- (void).cxx_destruct;
- (id)assetLocalIdentifier;
- (id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2;
- (void)setWorkerFlags:(int)arg1;
- (int)workerFlags;

@end
