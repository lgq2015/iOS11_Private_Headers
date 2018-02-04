/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTAlertStateTester : NSObject {
    id /* block */  _sectionInfoRetriever;
}

@property (nonatomic, copy) id /* block */ sectionInfoRetriever;

- (void).cxx_destruct;
- (unsigned long long)_blockingReasonForSectionInfo:(id)arg1;
- (id /* block */)sectionInfoRetriever;
- (void)setSectionInfoRetriever:(id /* block */)arg1;
- (unsigned long long)willNanoPresentNotificationForSectionInfo:(id)arg1 subsectionIDs:(id)arg2 isWristDetectDisabled:(bool)arg3 hasSectionIDOptedOutOfCoordination:(bool)arg4;

@end
