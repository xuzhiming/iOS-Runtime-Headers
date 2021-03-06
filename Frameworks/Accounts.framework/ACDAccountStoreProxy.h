/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACDAccountStoreProxy : NSObject <XPCProxyTarget> {
}


- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)clearPermissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2 withHandler:(id)arg3;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)dataclassesWithHandler:(id)arg1;
- (void)accountTypesWithHandler:(id)arg1;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)saveAccount:(id)arg1 forPID:(id)arg2 withHandler:(id)arg3;
- (void)saveAccount:(id)arg1 withHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;
- (void)accountsWithHandler:(id)arg1;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;

@end
