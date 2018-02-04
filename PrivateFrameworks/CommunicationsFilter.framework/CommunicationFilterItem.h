/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationFilterItem : NSObject {
    NSString * _emailAddress;
    struct __CFPhoneNumber { } * _phoneNumber;
}

@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) struct __CFPhoneNumber { }*phoneNumber;
@property (nonatomic, readonly) NSString *unformattedID;

- (bool)_acceptItemType:(id)arg1;
- (bool)_acceptVersion:(id)arg1;
- (id)_dictionaryRepresentationWithRedaction;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailAddress;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(struct __CFPhoneNumber { }*)arg1;
- (bool)isPhoneNumber;
- (bool)matchesFilterItem:(id)arg1;
- (struct __CFPhoneNumber { }*)phoneNumber;
- (id)unformattedID;

@end
