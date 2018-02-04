/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTableViewCell : UITableViewCell {
    bool  __mapkit_forceSeparatorFrameToCGRectZero;
    long long  __mapkit_separatorStyleOverride;
    bool  __mapkit_separatorStyleOverrideEnabled;
}

@property (nonatomic) bool _mapkit_forceSeparatorFrameToCGRectZero;
@property (nonatomic) long long _mapkit_separatorStyleOverride;

- (void)_mapkit_disableSeparatorStyleOverride;
- (bool)_mapkit_forceSeparatorFrameToCGRectZero;
- (long long)_mapkit_separatorStyleOverride;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)set_mapkit_forceSeparatorFrameToCGRectZero:(bool)arg1;
- (void)set_mapkit_separatorStyleOverride:(long long)arg1;

@end
