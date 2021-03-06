/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor {
    FCPrivateDataController * _privateDataController;
}

@property (nonatomic, retain) FCPrivateDataController *privateDataController;

- (void).cxx_destruct;
- (id)backingHeadlineIDs;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithPrivateDataController:(id)arg1 identifier:(id)arg2;
- (id)privateDataController;
- (void)setPrivateDataController:(id)arg1;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;

@end
