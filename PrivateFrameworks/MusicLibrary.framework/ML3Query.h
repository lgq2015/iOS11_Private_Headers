/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Query : NSObject <NSCoding, NSCopying> {
    Class  _entityClass;
    bool  _filtersOnDynamicProperties;
    ML3MusicLibrary * _library;
    unsigned long long  _limit;
    ML3AggregateQuery * _nonDirectAggregateQuery;
    long long  _options;
    NSArray * _orderingTerms;
    ML3Predicate * _predicate;
    NSString * _propertyToCount;
    bool  _usingSections;
}

@property (nonatomic, readonly) long long anyEntityPersistentID;
@property (nonatomic, readonly) unsigned long long countOfEntities;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) bool filtersOnDynamicProperties;
@property (nonatomic, readonly) bool hasEntities;
@property (nonatomic) bool ignoreRestrictionsPredicates;
@property (nonatomic) bool ignoreSystemFilterPredicates;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, readonly) ML3AggregateQuery *nonDirectAggregateQuery;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) NSArray *orderingTerms;
@property (nonatomic, readonly) NSString *persistentIDProperty;
@property (nonatomic, readonly) ML3Predicate *predicate;
@property (nonatomic, readonly) ML3Predicate *predicateIncludingSystemwidePredicates;
@property (nonatomic, readonly) NSString *propertyToCount;
@property (nonatomic, readonly) NSString *sectionProperty;
@property (nonatomic, readonly) NSString *selectCountSQL;
@property (nonatomic, readonly) NSString *selectPersistentIDsSQL;
@property (nonatomic, readonly) bool usingSections;

- (void).cxx_destruct;
- (long long)anyEntityPersistentID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;
- (unsigned long long)countOfEntities;
- (id)countStatementParameters;
- (bool)deleteAllEntitiesFromLibrary;
- (bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1;
- (bool)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(bool)arg2 cancelBlock:(id /* block */)arg3 usingBlock:(id /* block */)arg4;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(bool)arg2 sectionProperty:(id)arg3 cancelBlock:(id /* block */)arg4 usingBlock:(id /* block */)arg5;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (bool)filtersOnDynamicProperties;
- (bool)hasEntities;
- (bool)hasRowForColumn:(id)arg1;
- (bool)ignoreRestrictionsPredicates;
- (bool)ignoreSystemFilterPredicates;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(bool)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 options:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (id)library;
- (unsigned long long)limit;
- (void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(bool)arg4 cancelHandler:(id /* block */)arg5;
- (id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2;
- (id)nameOrderPropertyForProperty:(id)arg1;
- (id)nonDirectAggregateQuery;
- (long long)options;
- (id)orderingTerms;
- (id)persistentIDParameters;
- (id)persistentIDProperty;
- (id)predicate;
- (id)predicateIncludingSystemwidePredicates;
- (id)propertyToCount;
- (id)reverseQuery;
- (id)sectionProperty;
- (id)sections;
- (id)sectionsParameters;
- (bool)sectionsPersistentIDColumnIsDistinct;
- (id)selectCountSQL;
- (id)selectPersistentIDsSQL;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(bool)arg2;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(bool)arg2 distinct:(bool)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(bool)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(bool)arg5;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(bool)arg5 distinct:(bool)arg6 limit:(unsigned long long)arg7;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned long long)arg4;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(bool)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3;
- (id)selectSectionsSQL;
- (id)selectUnorderedPersistentIDsSQL;
- (void)setIgnoreRestrictionsPredicates:(bool)arg1;
- (void)setIgnoreSystemFilterPredicates:(bool)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (bool)usingSections;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;

@end
