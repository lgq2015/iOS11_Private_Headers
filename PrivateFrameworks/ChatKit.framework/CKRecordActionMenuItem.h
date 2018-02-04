/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecordActionMenuItem : CKActionMenuItem {
    NSDate * _dateSelected;
    bool  _wasSelected;
}

@property (nonatomic, retain) NSDate *dateSelected;
@property (nonatomic) bool wasSelected;

- (void).cxx_destruct;
- (id)dateSelected;
- (void)setDateSelected:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setWasSelected:(bool)arg1;
- (void)updateForState:(long long)arg1 touchInside:(bool)arg2;
- (bool)wasSelected;

@end
