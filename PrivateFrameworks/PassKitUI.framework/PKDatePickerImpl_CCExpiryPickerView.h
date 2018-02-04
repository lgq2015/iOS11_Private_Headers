/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSCalendar * _calendar;
    unsigned long long  _calendarUnit;
    SEL  _changeAction;
    id  _changeTarget;
    NSDateFormatter * _dateFormatter;
    UIFont * _font;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _possibleRange;
    NSNumber * _useDoubleMonthStyle;
    double  _width;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_calculateWidthForComponent:(long long)arg1 usingFont:(id)arg2;
- (id)_dateForComponent:(long long)arg1 index:(unsigned long long)arg2;
- (id)_dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)_dateWithCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (unsigned long long)_defaultIndexForComponent:(long long)arg1;
- (long long)_numberOfItemsForComponent:(long long)arg1;
- (id)_stringForComponent:(long long)arg1 index:(unsigned long long)arg2;
- (bool)_useDoubleMonthStyle;
- (double)_widthForComponent:(long long)arg1;
- (id)date;
- (id)initShowingDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 useDarkAppearance:(bool)arg4;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)prepareToDie;
- (void)setDate:(id)arg1;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end
