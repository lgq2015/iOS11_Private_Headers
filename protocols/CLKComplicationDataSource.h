/* made by EzioChiu.
 */

@protocol CLKComplicationDataSource <NSObject>

@required

- (void)getCurrentTimelineEntryForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationTimelineEntry *, void*
- (void)getSupportedTimeTravelDirectionsForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*

@optional

- (void)getLocalizableSampleTemplateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationTemplate *, void*
- (void)getNextRequestedUpdateDateWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)getPlaceholderTemplateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationTemplate *, void*
- (void)getPrivacyBehaviorForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getTimelineAnimationBehaviorForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getTimelineEndDateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)getTimelineEntriesForComplication:(void *)arg1 afterDate:(void *)arg2 limit:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 9: CLKComplication *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getTimelineEntriesForComplication:(void *)arg1 beforeDate:(void *)arg2 limit:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 9: CLKComplication *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getTimelineStartDateForComplication:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: CLKComplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;

@end