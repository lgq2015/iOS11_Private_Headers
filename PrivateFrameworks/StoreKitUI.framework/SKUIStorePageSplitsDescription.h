/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying> {
    SKUIStorePageSplit * _bottomSplit;
    SKUIStorePageSplit * _leftSplit;
    SKUIStorePageSplit * _rightSplit;
    SKUIStorePageSplit * _topSplit;
}

@property (nonatomic, copy) SKUIStorePageSplit *bottomSplit;
@property (nonatomic, readonly) SKUIStorePageSplit *firstSplit;
@property (nonatomic, copy) SKUIStorePageSplit *leftSplit;
@property (nonatomic, readonly) long long numberOfSplits;
@property (nonatomic, copy) SKUIStorePageSplit *rightSplit;
@property (nonatomic, copy) SKUIStorePageSplit *topSplit;

- (void).cxx_destruct;
- (id)bottomSplit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateSplitsUsingBlock:(id /* block */)arg1;
- (id)firstSplit;
- (id)leftSplit;
- (long long)numberOfSplits;
- (id)rightSplit;
- (void)setBottomSplit:(id)arg1;
- (void)setLeftSplit:(id)arg1;
- (void)setRightSplit:(id)arg1;
- (void)setTopSplit:(id)arg1;
- (void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(id /* block */)arg2;
- (id)topSplit;

@end
