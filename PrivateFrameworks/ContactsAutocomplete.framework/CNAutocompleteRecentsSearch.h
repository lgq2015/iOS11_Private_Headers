/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch> {
    CRRecentContactsLibrary * _library;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRRecentContactsLibrary *library;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autocompleteResultsForRecentContacts:(id)arg1 request:(id)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithCoreRecentContactsLibrary:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;

@end
