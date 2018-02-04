/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {
    NSMutableSet * _hrefs;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (nonatomic, retain) NSMutableSet *hrefs;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addHref:(id)arg1;
- (id)description;
- (id)hrefs;
- (id)hrefsAsFullURLs;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;
- (void)setHrefs:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;

@end
