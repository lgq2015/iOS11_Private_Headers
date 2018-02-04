/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABBufferQuery : NSObject {
    void * _addressBook;
    bool  _fetchLinkedContacts;
    bool  _needsMultivalueEntryTable;
    bool  _needsMultivalueTable;
    bool  _needsPersonLinkTable;
    bool  _needsPersonTable;
    struct __CFDictionary { } * _propertyIndices;
    bool  _requestedHasImageData;
    bool  _requestedImageCropRect;
    bool  _requestedImageData;
    bool  _requestedImageFullscreenData;
    bool  _requestedImageThumbnail;
    NSIndexSet * _requestedMultivalueIdentifiers;
    NSIndexSet * _requestedPropertyIdentifiers;
    unsigned int  _sortOrder;
    struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; } * _statement;
}

@property (nonatomic) void*addressBook;
@property (nonatomic, readonly) bool fetchLinkedContacts;
@property (nonatomic, readonly) bool needsMultivalueEntryTable;
@property (nonatomic, readonly) bool needsMultivalueTable;
@property (nonatomic, readonly) bool needsPersonLinkTable;
@property (nonatomic, readonly) bool needsPersonTable;
@property (nonatomic) struct __CFDictionary { }*propertyIndices;
@property (nonatomic, readonly) bool requestedHasImageData;
@property (nonatomic, readonly) bool requestedImageCropRect;
@property (nonatomic, readonly) bool requestedImageData;
@property (nonatomic, readonly) bool requestedImageFullscreenData;
@property (nonatomic, readonly) bool requestedImageThumbnail;
@property (nonatomic, readonly) NSIndexSet *requestedMultivalueIdentifiers;
@property (nonatomic, readonly) NSIndexSet *requestedPropertyIdentifiers;
@property (nonatomic, readonly) unsigned int sortOrder;
@property (nonatomic) struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*statement;

- (void)_initSetupPropertySet:(struct __CFSet { }*)arg1 includeLinkedContacts:(bool)arg2;
- (void*)addressBook;
- (void)appendBindParameterMarkersToQueryString:(id)arg1 count:(unsigned long long)arg2;
- (void)appendCustomPropertySelectsToQueryString:(id)arg1;
- (void)appendFromClauseToQueryString:(id)arg1;
- (void)appendOrderByClauseToQueryString:(id)arg1;
- (void)dealloc;
- (bool)fetchLinkedContacts;
- (id)initWithAddressBook:(void*)arg1 whereClause:(id)arg2 whereClauseBindBlock:(id /* block */)arg3 requestedProperties:(struct __CFSet { }*)arg4 includeLinkedContacts:(bool)arg5 sortOrder:(unsigned int)arg6;
- (bool)needsMultivalueEntryTable;
- (bool)needsMultivalueTable;
- (bool)needsPersonLinkTable;
- (bool)needsPersonTable;
- (void)prependWithClauseToQueryString:(id)arg1 whereClause:(id)arg2;
- (struct __CFDictionary { }*)propertyIndices;
- (bool)requestedHasImageData;
- (bool)requestedImageCropRect;
- (bool)requestedImageData;
- (bool)requestedImageFullscreenData;
- (bool)requestedImageThumbnail;
- (id)requestedMultivalueIdentifiers;
- (id)requestedPropertyIdentifiers;
- (void)setAddressBook:(void*)arg1;
- (void)setPropertyIndices:(struct __CFDictionary { }*)arg1;
- (void)setStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1;
- (unsigned int)sortOrder;
- (struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)statement;

@end
