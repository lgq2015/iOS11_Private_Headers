/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell {
    <NTKCFaceDetailToggleCellDelegate> * _delegate;
    UISwitch * _toggle;
}

@property (nonatomic) <NTKCFaceDetailToggleCellDelegate> *delegate;
@property (nonatomic) bool on;
@property (nonatomic, retain) UISwitch *toggle;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_switchToggled;
- (id)delegate;
- (id)init;
- (void)layoutSubviews;
- (bool)on;
- (double)rowHeight;
- (void)setDelegate:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setToggle:(id)arg1;
- (id)toggle;

@end
