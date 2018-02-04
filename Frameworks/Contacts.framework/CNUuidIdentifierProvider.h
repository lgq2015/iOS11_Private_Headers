/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNUuidIdentifierProvider : NSObject <CNIdentifierProvider> {
    NSString * _suffix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSuffix:(id)arg1;
- (id)makeIdentifier;

@end
