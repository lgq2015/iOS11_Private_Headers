/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactBufferDecoder : NSObject {
    long long  _bytesNeededToResume;
    CNContactKeyVector * _keyDescriptorToMakeAvailable;
    bool  _mutableResults;
    CNMutableContact * _pendingContact;
    NSMutableData * _resumeBuffer;
    long long  _state;
}

@property (nonatomic) long long bytesNeededToResume;
@property (readonly) bool hasPendingContacts;
@property (nonatomic, copy) CNContactKeyVector *keyDescriptorToMakeAvailable;
@property (nonatomic) bool mutableResults;
@property (nonatomic, retain) CNMutableContact *pendingContact;
@property (nonatomic, retain) NSMutableData *resumeBuffer;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_applyImageDataFromByteCursor:(char **)arg1 end:(char *)arg2;
- (void)_applyMultivalueFromByteCursor:(char **)arg1 end:(char *)arg2 abPropertyID:(int)arg3;
- (void)_applyPropertiesFromFromByteCursor:(char **)arg1 end:(char *)arg2;
- (id)_contactFromByteCursor:(char **)arg1 end:(char *)arg2;
- (long long)bytesNeededToResume;
- (id)completedPendingContactFromByteCursor:(char **)arg1 end:(char *)arg2;
- (id)contactsFromBuffer:(id)arg1;
- (bool)hasPendingContacts;
- (id)initWithKeyDescriptorToMakeAvailable:(id)arg1 mutableResults:(bool)arg2;
- (id)keyDescriptorToMakeAvailable;
- (bool)mutableResults;
- (id)pendingContact;
- (id)resumeBuffer;
- (void)setBytesNeededToResume:(long long)arg1;
- (void)setKeyDescriptorToMakeAvailable:(id)arg1;
- (void)setMutableResults:(bool)arg1;
- (void)setPendingContact:(id)arg1;
- (void)setResumeBuffer:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
