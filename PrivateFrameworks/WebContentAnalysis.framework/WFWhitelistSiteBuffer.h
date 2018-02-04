/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFWhitelistSiteBuffer : NSObject {
    unsigned long long  _maxSize;
    NSMutableDictionary * _siteTree;
}

@property unsigned long long maxSize;
@property (retain) NSMutableDictionary *siteTree;

- (void)addURLString:(id)arg1;
- (bool)containsURLString:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)maxSize;
- (void)setMaxSize:(unsigned long long)arg1;
- (void)setSiteTree:(id)arg1;
- (id)siteTree;
- (bool)treeContainsURLString:(id)arg1;

@end
