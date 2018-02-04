/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {
    CoreDAVBulkRequestsItem * _crudItem;
    CoreDAVBulkRequestsItem * _simpleItem;
}

@property (nonatomic, retain) CoreDAVBulkRequestsItem *crudItem;
@property (nonatomic, readonly) NSDictionary *dictRepresentation;
@property (nonatomic, retain) CoreDAVBulkRequestsItem *simpleItem;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)crudItem;
- (id)description;
- (id)dictRepresentation;
- (id)init;
- (void)setCrudItem:(id)arg1;
- (void)setSimpleItem:(id)arg1;
- (id)simpleItem;

@end
