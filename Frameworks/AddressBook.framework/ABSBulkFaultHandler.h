/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSBulkFaultHandler : NSObject {
    CNFuture * _contactStoreFuture;
    <CNScheduler> * _inlineScheduler;
    long long  _interest;
    NSMutableSet * _keyDescriptorOfInterests;
    double  _lastRequestTimeStamp;
    ABSAddressBookContextStorage * _storage;
}

@property (nonatomic, readonly) CNFuture *contactStoreFuture;
@property (nonatomic, readonly) <CNScheduler> *inlineScheduler;
@property (nonatomic) long long interest;
@property (nonatomic, readonly) NSMutableSet *keyDescriptorOfInterests;
@property (nonatomic) double lastRequestTimeStamp;
@property (nonatomic, readonly) ABSAddressBookContextStorage *storage;

+ (long long)batchSize;
+ (long long)interestThreshold;
+ (double)interestWindow;

- (void).cxx_destruct;
- (id)batchOfPeopleInStorageMissingKeysIncluding:(id)arg1;
- (void)completePeople:(id)arg1 withKeysToFetch:(id)arg2;
- (void)completePerson:(id)arg1 withKeysToFetch:(id)arg2;
- (id)contactStoreFuture;
- (void)increaseInterest;
- (id)initWithStorage:(id)arg1 contactStoreFuture:(id)arg2 schedulerProvider:(id)arg3;
- (id)inlineScheduler;
- (long long)interest;
- (id)keyDescriptorOfInterests;
- (double)lastRequestTimeStamp;
- (void)refetchContacts:(id)arg1 keysToFetch:(id)arg2 handler:(id /* block */)arg3;
- (void)resetInterest;
- (void)setInterest:(long long)arg1;
- (void)setLastRequestTimeStamp:(double)arg1;
- (id)storage;
- (id)store;
- (bool)withinInterestWindow;

@end
