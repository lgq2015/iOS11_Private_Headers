/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKToneClassicsPickerItem : TKTonePickerItem {
    long long  _classicToneIndex;
}

@property (setter=_setClassicToneIndex:, nonatomic) long long classicToneIndex;
@property (nonatomic, readonly) TKTonePickerItem *parentItem;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setClassicToneIndex:(long long)arg1;
- (id)childItemAtIndex:(long long)arg1;
- (long long)classicToneIndex;
- (id)parentItem;

@end
