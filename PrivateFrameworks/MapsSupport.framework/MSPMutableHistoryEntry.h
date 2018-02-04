/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject> {
    bool  _immutable;
    MSPHistoryEntryStorage * _storage;
    NSUUID * _storageIdentifier;
    NSDate * _usageDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isImmutable, nonatomic, readonly) bool immutable;
@property (nonatomic, readonly) MSPHistoryEntryStorage *storage;
@property (readonly) Class superclass;
@property (getter=tracksRAPReportingOnly, nonatomic) bool tracksRAPReportingOnly;
@property (nonatomic, copy) NSDate *usageDate;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableHistoryEntryForStorage:(id)arg1;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (void).cxx_destruct;
- (bool)_isImmutable;
- (bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (void)_markImmutable;
- (void)_noteWillMutate;
- (id)copyIfValidWithError:(out id*)arg1;
- (void)ifMutableSearch:(id /* block */)arg1 ifMutableRoute:(id /* block */)arg2 ifMutablePlaceDisplay:(id /* block */)arg3 ifMutableTransitLineItem:(id /* block */)arg4;
- (void)ifSearch:(id /* block */)arg1 ifRoute:(id /* block */)arg2 ifPlaceDisplay:(id /* block */)arg3 ifTransitLineItem:(id /* block */)arg4;
- (id)init;
- (id)initWithStorage:(id)arg1;
- (bool)isFailed;
- (bool)isUserVisibleDuplicateOfEntry:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setTracksRAPReportingOnly:(bool)arg1;
- (void)setUsageDate:(id)arg1;
- (id)storage;
- (id)storageIdentifier;
- (bool)tracksRAPReportingOnly;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;
- (id)usageDate;

@end
