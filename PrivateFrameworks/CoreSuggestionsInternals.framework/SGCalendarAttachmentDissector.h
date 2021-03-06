/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGCalendarAttachmentDissector : SGPipelineDissector {
    SGAccountsAdapter * _accountsAdapter;
    SGMEventICSOpportunity * _icsOpportunityTracker;
}

- (void).cxx_destruct;
- (struct SGMEventICSSourceType_ { unsigned long long x1; })accountTypeFor:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)downloadedCalendarAttachmentsFrom:(id)arg1;
- (bool)hasCalendarAccountForOneOf:(id)arg1;
- (id)init;
- (bool)shouldIgnoreEntity:(id)arg1;

@end
