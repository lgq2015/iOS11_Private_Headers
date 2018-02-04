/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLCalendarMigrator : WLMigrationWebService {
    EKEventStore * _eventStore;
}

+ (id)contentType;

- (void).cxx_destruct;
- (void)_importDataRecord:(id)arg1 summary:(id)arg2;
- (id)contentType;
- (void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
- (void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;

@end
