/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSupportedReportItem : CoreDAVItem {
    CoreDAVItem * _report;
}

@property (nonatomic, retain) CoreDAVItem *report;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)report;
- (void)setReport:(id)arg1;

@end
