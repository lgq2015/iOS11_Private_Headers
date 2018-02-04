/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {
    <CNContactsLogger> * _contactsLogger;
    <CNRegulatoryLogger> * _regulatoryLogger;
    <CNSpotlightIndexingLogger> * _spotlightIndexingLogger;
}

@property (nonatomic, readonly) <CNContactsLogger> *contactsLogger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNRegulatoryLogger> *regulatoryLogger;
@property (nonatomic, readonly) <CNSpotlightIndexingLogger> *spotlightIndexingLogger;
@property (readonly) Class superclass;

+ (id)defaultProvider;

- (void).cxx_destruct;
- (id)contactsLogger;
- (id)regulatoryLogger;
- (id)spotlightIndexingLogger;

@end
