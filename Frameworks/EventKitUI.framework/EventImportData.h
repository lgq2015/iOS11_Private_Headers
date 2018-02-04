/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EventImportData : NSObject {
    NSURL * _URL;
    NSDate * _endDate;
    NSData * _icsData;
    NSString * _notes;
    int  _requestedAction;
    NSDate * _startDate;
    NSString * _title;
    NSString * _uniqueId;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSData *icsData;
@property (nonatomic, retain) NSString *notes;
@property (nonatomic) int requestedAction;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uniqueId;

+ (id)_extractEventDataFromEventICSData:(id)arg1;
+ (id)_extractEventDataFromReminderICSData:(id)arg1;
+ (id)_extractEventDataFromSpotlightIdentifier:(id)arg1;
+ (id)_extractEventDataFromURL:(id)arg1;
+ (id)_extractEventDataFromUTF8StringData:(id)arg1;
+ (id)acceptedTypeIdentifiers;
+ (id)eventImportDataFromData:(id)arg1 forType:(id)arg2;
+ (void)extractEventImportDataFromDropSession:(id)arg1 completionBlock:(id /* block */)arg2;
+ (bool)itemContainsCalendarICSData:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)endDate;
- (id)icsData;
- (id)init;
- (id)notes;
- (int)requestedAction;
- (void)setEndDate:(id)arg1;
- (void)setIcsData:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setRequestedAction:(int)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)startDate;
- (id)title;
- (id)uniqueId;

@end
