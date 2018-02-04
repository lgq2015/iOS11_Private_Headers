/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteRecentContactsTransform : NSObject {
    CRRecentContactsLibrary * _library;
    NSArray * _otherAddressesAlreadyChosen;
    NSString * _priorityDomainForSorting;
    NSString * _searchString;
    NSString * _sendingAddress;
}

@property (retain) CRRecentContactsLibrary *library;
@property (copy) NSArray *otherAddressesAlreadyChosen;
@property (copy) NSString *priorityDomainForSorting;
@property (copy) NSString *searchString;
@property (copy) NSString *sendingAddress;

+ (long long)addressTypeForRecentContact:(id)arg1;
+ (id)autocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5 library:(id)arg6;
+ (id)contactAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 completesChosenGroup:(bool)arg3;
+ (id)groupAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5;
+ (id /* block */)resultTransformWithFactory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4 library:(id)arg5;
+ (id /* block */)transformForRequest:(id)arg1 library:(id)arg2;

- (void).cxx_destruct;
- (id)library;
- (id)otherAddressesAlreadyChosen;
- (id)priorityDomainForSorting;
- (id)searchString;
- (id)sendingAddress;
- (void)setLibrary:(id)arg1;
- (void)setOtherAddressesAlreadyChosen:(id)arg1;
- (void)setPriorityDomainForSorting:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSendingAddress:(id)arg1;

@end
