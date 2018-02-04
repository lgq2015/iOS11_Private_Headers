/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABAccountScorer : NSObject {
    void * _account;
    ACAccountStore * _accountStore;
    NSString * _accountType;
    void * _addressBook;
    int  _defaultSourceID;
    double  _score;
    int  _sourceID;
}

@property (nonatomic) void*account;
@property (nonatomic, readonly) NSString *accountDisambiguationDescription;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) NSString *accountType;
@property (nonatomic, readonly) NSString *accountTypeDescription;
@property (nonatomic) void*addressBook;
@property (nonatomic) int defaultSourceID;
@property (nonatomic) double score;
@property (nonatomic) int sourceID;

- (void).cxx_destruct;
- (int)_findBestSourceID;
- (void*)account;
- (id)accountDisambiguationDescription;
- (id)accountStore;
- (id)accountType;
- (id)accountTypeDescription;
- (void*)addressBook;
- (void)calculateScore;
- (void)dealloc;
- (int)defaultSourceID;
- (id)initWithAddressBook:(void*)arg1 accountStore:(id)arg2 account:(void*)arg3 defaultSourceID:(int)arg4;
- (double)score;
- (void)setAccount:(void*)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setDefaultSourceID:(int)arg1;
- (void)setScore:(double)arg1;
- (void)setSourceID:(int)arg1;
- (int)sourceID;

@end
