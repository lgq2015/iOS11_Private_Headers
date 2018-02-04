/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVResponseItem : CoreDAVItem {
    CoreDAVErrorItem * _errorItem;
    NSMutableArray * _hrefs;
    CoreDAVItemWithHrefChildItem * _location;
    CoreDAVMatchResultsItem * _matchResults;
    NSMutableSet * _propStats;
    CoreDAVLeafItem * _responseDescription;
    CoreDAVLeafItem * _serverUID;
    CoreDAVLeafItem * _status;
}

@property (nonatomic, retain) CoreDAVErrorItem *errorItem;
@property (nonatomic, retain) NSMutableArray *hrefs;
@property (nonatomic, retain) CoreDAVItemWithHrefChildItem *location;
@property (nonatomic, retain) CoreDAVMatchResultsItem *matchResults;
@property (nonatomic, retain) NSMutableSet *propStats;
@property (nonatomic, retain) CoreDAVLeafItem *responseDescription;
@property (nonatomic, retain) CoreDAVLeafItem *serverUID;
@property (nonatomic, retain) CoreDAVLeafItem *status;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addHref:(id)arg1;
- (void)addPropStat:(id)arg1;
- (id)description;
- (id)errorItem;
- (id)firstHref;
- (bool)hasPropertyError;
- (id)hrefs;
- (id)init;
- (id)location;
- (id)matchResults;
- (id)propStats;
- (id)responseDescription;
- (id)serverUID;
- (void)setErrorItem:(id)arg1;
- (void)setHrefs:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMatchResults:(id)arg1;
- (void)setPropStats:(id)arg1;
- (void)setResponseDescription:(id)arg1;
- (void)setServerUID:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)successfulPropertiesToValues;

@end
