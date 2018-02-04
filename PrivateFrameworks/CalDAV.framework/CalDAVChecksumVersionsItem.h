/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVChecksumVersionsItem : CoreDAVItem {
    NSMutableSet * _versionStringsSupported;
}

- (void).cxx_destruct;
- (void)addVersionSupported:(id)arg1;
- (id)copyParseRules;
- (id)init;
- (bool)supportsVersion:(id)arg1;

@end
