/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentLayoutRules : NSObject <NSCopying> {
    bool  _allowsIntersection;
    bool  _allowsSiblingBasedResizing;
    unsigned long long  _minimumColumnSpan;
    bool  _shouldIgnoreDocumentMargin;
    bool  _shouldSpanAllColumns;
}

@property (nonatomic) bool allowsIntersection;
@property (nonatomic) bool allowsSiblingBasedResizing;
@property (nonatomic) unsigned long long minimumColumnSpan;
@property (nonatomic) bool shouldIgnoreDocumentMargin;
@property (nonatomic) bool shouldSpanAllColumns;

+ (id)bodyComponentLayoutRules;
+ (id)defaultLayoutRules;
+ (id)fullWidthLayoutRules;
+ (id)twoColumnLayoutRules;

- (bool)allowsIntersection;
- (bool)allowsSiblingBasedResizing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (unsigned long long)minimumColumnSpan;
- (void)setAllowsIntersection:(bool)arg1;
- (void)setAllowsSiblingBasedResizing:(bool)arg1;
- (void)setMinimumColumnSpan:(unsigned long long)arg1;
- (void)setShouldIgnoreDocumentMargin:(bool)arg1;
- (void)setShouldSpanAllColumns:(bool)arg1;
- (bool)shouldIgnoreDocumentMargin;
- (bool)shouldSpanAllColumns;

@end
