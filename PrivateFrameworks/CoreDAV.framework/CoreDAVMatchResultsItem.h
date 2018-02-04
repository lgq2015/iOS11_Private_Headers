/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMatchResultsItem : CoreDAVItem {
    CoreDAVLeafItem * _calendarDescription;
    CoreDAVLeafItem * _language;
    CoreDAVLeafItem * _rank;
    CoreDAVLeafItem * _region;
}

@property (nonatomic, retain) CoreDAVLeafItem *calendarDescription;
@property (nonatomic, retain) CoreDAVLeafItem *language;
@property (nonatomic, retain) CoreDAVLeafItem *rank;
@property (nonatomic, retain) CoreDAVLeafItem *region;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)calendarDescription;
- (id)description;
- (id)language;
- (id)rank;
- (id)region;
- (void)setCalendarDescription:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRank:(id)arg1;
- (void)setRegion:(id)arg1;

@end
