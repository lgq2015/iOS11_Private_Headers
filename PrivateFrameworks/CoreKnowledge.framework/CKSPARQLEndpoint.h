/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKSPARQLEndpoint : NSObject {
    CKKnowledgeStore * _knowledgeStore;
}

- (void).cxx_destruct;
- (void)importTriplesFromFileAtPath:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)sparqlResultsForQuery:(id)arg1 error:(id*)arg2;

@end
