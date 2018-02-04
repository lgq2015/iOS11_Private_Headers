/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {
    EKUIAlarm * _alarm;
    unsigned long long  _alarmIndex;
    bool  _allDay;
    EKCalendar * _calendar;
    bool  _eventHasTravelTime;
    bool  _immediateAlarmCreation;
    EKUIAlarm * _previousAlarm;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    bool  _shouldAllowAlarmsTriggeringAfterStartDate;
    bool  _shouldShowLeaveNowOption;
    CalendarEventAlarmTable * _table;
}

@property (nonatomic, retain) EKUIAlarm *alarm;
@property (nonatomic) unsigned long long alarmIndex;
@property (nonatomic) bool allDay;
@property (nonatomic, retain) EKCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eventHasTravelTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long presetIdentifier;
@property (nonatomic, retain) EKUIAlarm *previousAlarm;
@property (nonatomic) bool shouldAllowAlarmsTriggeringAfterStartDate;
@property (nonatomic) bool shouldShowLeaveNowOption;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_storeChanged:(id)arg1;
- (id)alarm;
- (unsigned long long)alarmIndex;
- (void)alarmTableDidChangeAlarm:(id)arg1;
- (bool)allDay;
- (id)calendar;
- (bool)customSelected;
- (bool)eventHasTravelTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)loadView;
- (long long)presetIdentifier;
- (id)previousAlarm;
- (void)setAlarm:(id)arg1;
- (void)setAlarmIndex:(unsigned long long)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCustomString:(id)arg1;
- (void)setEventHasTravelTime:(bool)arg1;
- (void)setPresetIdentifier:(long long)arg1;
- (void)setPreviousAlarm:(id)arg1;
- (void)setShouldAllowAlarmsTriggeringAfterStartDate:(bool)arg1;
- (void)setShouldShowLeaveNowOption:(bool)arg1;
- (bool)shouldAllowAlarmsTriggeringAfterStartDate;
- (bool)shouldShowLeaveNowOption;
- (id)tableHeaderView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
