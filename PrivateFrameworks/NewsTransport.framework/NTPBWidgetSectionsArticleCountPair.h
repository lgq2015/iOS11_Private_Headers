/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetSectionsArticleCountPair : PBCodable <NSCopying> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _countOfArticlesExposedEachSections;
    NSString * _widgetSectionIdsExposed;
}

@property (nonatomic, readonly) long long*countOfArticlesExposedEachSections;
@property (nonatomic, readonly) unsigned long long countOfArticlesExposedEachSectionsCount;
@property (nonatomic, readonly) bool hasWidgetSectionIdsExposed;
@property (nonatomic, retain) NSString *widgetSectionIdsExposed;

- (void).cxx_destruct;
- (void)addCountOfArticlesExposedEachSection:(long long)arg1;
- (void)clearCountOfArticlesExposedEachSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1;
- (long long*)countOfArticlesExposedEachSections;
- (unsigned long long)countOfArticlesExposedEachSectionsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWidgetSectionIdsExposed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountOfArticlesExposedEachSections:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setWidgetSectionIdsExposed:(id)arg1;
- (id)widgetSectionIdsExposed;
- (void)writeTo:(id)arg1;

@end
