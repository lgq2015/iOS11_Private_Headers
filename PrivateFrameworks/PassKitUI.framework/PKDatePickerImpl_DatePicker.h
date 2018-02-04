/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDatePickerImpl_DatePicker : UIDatePicker <PKDatePickerInternalImplementationProtocol>

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)date;
- (id)initShowingDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 useDarkAppearance:(bool)arg4;
- (void)prepareToDie;
- (void)setDate:(id)arg1;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end
