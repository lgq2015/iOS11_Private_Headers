/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRRecentContact : NSObject <NSSecureCoding> {
    NSString * _address;
    long long  _contactID;
    NSNumber * _decayedWeight;
    NSString * _displayName;
    unsigned long long  _groupKind;
    NSString * _groupName;
    NSString * _kind;
    NSString * _lastSendingAddress;
    NSArray * _members;
    NSDictionary * _metadata;
    NSString * _originalSource;
    NSString * _rawAddress;
    NSMutableArray * _recentDates;
    long long  _recentID;
    NSString * _recentsDomain;
    NSNumber * _weight;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic) long long contactID;
@property (nonatomic, readonly) unsigned long long countOfRecents;
@property (nonatomic, retain) NSNumber *decayedWeight;
@property (nonatomic, copy) NSString *displayName;
@property (getter=isGroup, nonatomic, readonly) bool group;
@property (nonatomic) unsigned long long groupKind;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *lastSendingAddress;
@property (nonatomic, readonly, copy) NSDate *leastRecentDate;
@property (nonatomic, copy) NSArray *members;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSDate *mostRecentDate;
@property (nonatomic, copy) NSString *originalSource;
@property (nonatomic, copy) NSString *rawAddress;
@property (nonatomic, copy) NSArray *recentDates;
@property (nonatomic) long long recentID;
@property (nonatomic, copy) NSString *recentsDomain;
@property (nonatomic, retain) NSNumber *weight;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

+ (bool)supportsSecureCoding;

- (void)_enumerateWordsInString:(id)arg1 usingBlock:(id /* block */)arg2;
- (struct __CFStringTokenizer { }*)_wordTokenizerForString:(id)arg1 locale:(id)arg2;
- (id)address;
- (void)applyWeight:(id)arg1;
- (id)archivableContactID;
- (id)archivableGroupKind;
- (id)archivableGroupMembers;
- (id)archivableMetadata;
- (id)archivableRecentID;
- (long long)contactID;
- (unsigned long long)countOfRecents;
- (void)dealloc;
- (id)decayedWeight;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateArchivablePropertiesWithBlock:(id /* block */)arg1;
- (unsigned long long)groupKind;
- (id)groupName;
- (bool)hasFullTextMatch:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactID:(long long)arg1;
- (id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4;
- (void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(bool)arg3;
- (unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(bool*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (id)kind;
- (id)lastSendingAddress;
- (void)lazilyCreateRecentDates;
- (id)leastRecentDate;
- (id)members;
- (id)metadata;
- (id)mostRecentDate;
- (id)originalSource;
- (id)rawAddress;
- (id)recentDates;
- (long long)recentID;
- (id)recentsDomain;
- (void)recordRecentEventForDate:(id)arg1 userInitiated:(bool)arg2;
- (void)setAddress:(id)arg1;
- (void)setArchivableContactID:(id)arg1;
- (void)setArchivableGroupKind:(id)arg1;
- (void)setArchivableGroupMembers:(id)arg1;
- (void)setArchivableMetadata:(id)arg1;
- (void)setArchivableRecentID:(id)arg1;
- (void)setContactID:(long long)arg1;
- (void)setDecayedWeight:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGroupKind:(unsigned long long)arg1;
- (void)setGroupName:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLastSendingAddress:(id)arg1;
- (void)setMembers:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOriginalSource:(id)arg1;
- (void)setRawAddress:(id)arg1;
- (void)setRecentDates:(id)arg1;
- (void)setRecentID:(long long)arg1;
- (void)setRecentsDomain:(id)arg1;
- (void)setWeight:(id)arg1;
- (id)weight;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)_addressBookContext;
- (void)_setAddressBookContext:(id)arg1;
- (void*)existingPerson;
- (int)matchedIdentifier;
- (void*)person;
- (int)property;

@end
