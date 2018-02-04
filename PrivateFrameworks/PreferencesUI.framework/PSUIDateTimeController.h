/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIDateTimeController : PSListController <PSUIDateTimePickerCellDelegate> {
    PSSpecifier * _currentTimeSpecifier;
    struct __CFDateFormatter { } * _dateFormatter;
    bool  _localeForces24HourTime;
    PSWallClockMinuteTimer * _minuteTimer;
    NSIndexPath * _setDateAndTimeIndexPath;
    struct __CFDateFormatter { } * _timeFormatter;
    PSSpecifier * _timePickerSpecifier;
    PSSpecifier * _timeZoneSpecifier;
    NSTimer * _timer;
}

@property (retain) PSSpecifier *currentTimeSpecifier;
@property (nonatomic, retain) PSWallClockMinuteTimer *minuteTimer;
@property (retain) PSSpecifier *timePickerSpecifier;
@property (retain) PSSpecifier *timeZoneSpecifier;

- (void).cxx_destruct;
- (void)_createDateTimeFormatters;
- (void)_setSpecifier:(id)arg1 valueEnabled:(bool)arg2;
- (void)_updateCurrentTime;
- (id)currentDateString;
- (id)currentTimeSpecifier;
- (id)currentTimeString;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)is24HourTime:(id)arg1;
- (void)localeChanged:(id)arg1;
- (id)makeCurrentTimeSpecifier;
- (id)makeTimePickerSpecifier;
- (id)minuteTimer;
- (void)newCarrierNotification;
- (void)reloadTimezone;
- (void)set24HourTime:(id)arg1 specifier:(id)arg2;
- (void)setAutomaticTimeFooter;
- (void)setCurrentTimeSpecifier:(id)arg1;
- (void)setMinuteTimer:(id)arg1;
- (void)setTimePickerSpecifier:(id)arg1;
- (void)setTimeZoneSpecifier:(id)arg1;
- (void)setTimeZoneValue:(id)arg1 specifier:(id)arg2;
- (void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2;
- (bool)shouldDisplayTimezoneSpinner;
- (void)significantTimeChange:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)timePickerSpecifier;
- (id)timeZoneSpecifier;
- (id)timeZoneValue:(id)arg1;
- (id)useAutomaticTime:(id)arg1;
- (id)valueForTime:(id)arg1;

@end