/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics {
    unsigned long long  _columnsInLandscape;
    unsigned long long  _columnsInPortrait;
}

@property (nonatomic) unsigned long long columnsInLandscape;
@property (nonatomic) unsigned long long columnsInPortrait;

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 forIdiom:(long long)arg3;

- (unsigned long long)columnsInLandscape;
- (unsigned long long)columnsInPortrait;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdiom:(long long)arg1;
- (struct CGSize { double x1; double x2; })itemSizeForCollectionView:(id)arg1;
- (void)setColumnsInLandscape:(unsigned long long)arg1;
- (void)setColumnsInPortrait:(unsigned long long)arg1;
- (void)updateColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;

@end
