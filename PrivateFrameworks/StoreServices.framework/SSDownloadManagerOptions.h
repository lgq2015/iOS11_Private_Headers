/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManagerOptions : NSObject <NSCopying> {
    NSArray * _downloadKinds;
    bool  _filterExternalOriginatedDownloads;
    bool  _ignoreDivertedDownloads;
    NSString * _persistenceIdentifier;
    NSArray * _prefetchedDownloadExternalProperties;
    NSArray * _prefetchedDownloadProperties;
}

@property (nonatomic, copy) NSArray *downloadKinds;
@property (nonatomic) bool ignoreDivertedDownloads;
@property (nonatomic, copy) NSString *persistenceIdentifier;
@property (nonatomic, copy) NSArray *prefetchedDownloadExternalProperties;
@property (nonatomic, copy) NSArray *prefetchedDownloadProperties;
@property (nonatomic) bool shouldFilterExternalOriginatedDownloads;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadKinds;
- (unsigned long long)hash;
- (bool)ignoreDivertedDownloads;
- (bool)isEqual:(id)arg1;
- (id)persistenceIdentifier;
- (id)prefetchedDownloadExternalProperties;
- (id)prefetchedDownloadProperties;
- (void)setDownloadKinds:(id)arg1;
- (void)setIgnoreDivertedDownloads:(bool)arg1;
- (void)setPersistenceIdentifier:(id)arg1;
- (void)setPrefetchedDownloadExternalProperties:(id)arg1;
- (void)setPrefetchedDownloadProperties:(id)arg1;
- (void)setShouldFilterExternalOriginatedDownloads:(bool)arg1;
- (bool)shouldFilterExternalOriginatedDownloads;

@end
