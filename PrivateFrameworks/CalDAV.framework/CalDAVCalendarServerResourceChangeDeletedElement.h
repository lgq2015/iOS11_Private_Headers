/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement {
    NSString * _componentType;
    NSString * _displayName;
    bool  _hadMoreInstances;
    ICSDateValue * _nextInstance;
    NSString * _summary;
}

@property (nonatomic, retain) NSString *componentType;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool hadMoreInstances;
@property (nonatomic, retain) ICSDateValue *nextInstance;
@property (nonatomic, retain) NSString *summary;

- (void).cxx_destruct;
- (id)componentType;
- (id)copyParseRules;
- (id)displayName;
- (bool)hadMoreInstances;
- (id)init;
- (id)nextInstance;
- (void)setComponentType:(id)arg1;
- (void)setDeletedDetails:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHadMoreInstances:(bool)arg1;
- (void)setNextInstance:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
