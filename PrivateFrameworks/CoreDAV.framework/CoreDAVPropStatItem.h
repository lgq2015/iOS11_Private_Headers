/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropStatItem : CoreDAVItem {
    CoreDAVErrorItem * _errorItem;
    CoreDAVItem * _prop;
    CoreDAVLeafItem * _responseDescription;
    CoreDAVLeafItem * _status;
}

@property (nonatomic, retain) CoreDAVErrorItem *errorItem;
@property (nonatomic, retain) CoreDAVItem *prop;
@property (nonatomic, retain) CoreDAVLeafItem *responseDescription;
@property (nonatomic, retain) CoreDAVLeafItem *status;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)errorItem;
- (id)init;
- (id)prop;
- (id)responseDescription;
- (void)setErrorItem:(id)arg1;
- (void)setProp:(id)arg1;
- (void)setResponseDescription:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
