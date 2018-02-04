/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactsEnvironment : NSObject {
    CNiOSABPredicateRunner * _abPredicateRunner;
    CNiOSAddressBook * _addressBook;
    NSURL * _baseURL;
    <CNContactsLoggerProvider> * _loggerProvider;
    <CNSchedulerProvider> * _schedulerProvider;
    <SGSuggestionsServiceContactsProtocol> * _suggestionsService;
}

@property (nonatomic, retain) CNiOSABPredicateRunner *abPredicateRunner;
@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, readonly) <CNContactsLoggerProvider> *loggerProvider;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, retain) <SGSuggestionsServiceContactsProtocol> *suggestionsService;
@property (nonatomic, readonly) bool useInMemoryStores;

+ (id)baseURLWithDataLocationName:(id)arg1;
+ (id)currentEnvironment;
+ (id)inMemoryURL;
+ (bool)supportsSecureCoding;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)abPredicateRunner;
- (id)addressBook;
- (id)baseURL;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 loggerProvider:(id)arg2;
- (id)loggerProvider;
- (id)schedulerProvider;
- (void)setAbPredicateRunner:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setSuggestionsService:(id)arg1;
- (id)suggestionsService;
- (bool)useInMemoryStores;

@end
