/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDateTimePicker : NSObject <WKFormControl> {
    struct RetainPtr<UIDatePicker> { 
        void *m_ptr; 
    }  _datePicker;
    NSString * _formatString;
    bool  _isTimeInput;
    bool  _shouldRemoveTimeZoneInformation;
    WKContentView * _view;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dateChangeHandler:(id)arg1;
- (void)_dateChanged;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangedSetAsString;
- (id)_sanitizeInputValueForFormatter:(id)arg1;
- (long long)_timeZoneOffsetFromGMT:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (struct RetainPtr<NSDateFormatter> { void *x1; })dateFormatterForPicker;
- (id)datePicker;
- (void)dealloc;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;

@end
