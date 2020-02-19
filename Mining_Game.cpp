#include <iostream>
#include <windows.h>

using namespace std;


int main(){
	bool start = true;
	int startWay;
	bool marketMine = true;
	int marketWay;
	bool trymarket = true;
	static int copperGot = 2;
	int copperNow = 0;
	int balance = 0;
	int shopWay;
	int item;
	bool market = true;
	string errorInput = "Error, Again: ";
	bool gearBuy = true;
	int pickaxe;


	while(start != false){
		cout << "1. Start\n2. Credits\n>";
		cin >> startWay;
		if(startWay == 1){
			cout << "You awake in old house, you dont have any money but your job is to mine.\nYou can make some money and buy gear and upgrades.\n";
			Sleep(2000);
			cout << "1. Mine\n2. Market\n";
			cin >> marketWay;
			while(marketMine != false){
			if(marketWay == 1){
                cout << endl;
				cout << "You are going mine..";
				Sleep(800);
				cout << "\nMining...." << endl;
				Sleep(1000);
				copperNow += copperGot;
				cout << "You have got > " << copperGot << " copper and your copper is > " << copperNow << ". \n" << endl;
				cout << "1. Mine\n2. Market\n>";
				cin >> marketWay;
}			else if(marketWay == 2){
                Sleep(1000);
                system("CLS");
				cout << "Welcome on market. Here you can sell ores you have mined and buy better items\nfor more ores or money.\n\n";
				Sleep(2000);
				while(market != false){
				cout << "1. Sell all copper.\n2. Balance\n3. Gear\n4. Pickaxe\n5. Mine\n>";
				cin >> shopWay;
				if(shopWay == 1){
                    Sleep(1000);
					cout << "You have sold " << copperNow << " copper. You have gained " << copperNow * 2 << "$\n\n";
					balance = copperNow * 2;
					copperNow -= copperNow;
					Sleep(2250);
                    system("CLS");
				}else if(shopWay == 2){
					cout << "Your balance is: " << balance << "$\n";
					Sleep(3000);
					system("CLS");
				}else if(shopWay == 3){
				    Sleep(1000);
				    system("CLS");
					cout << "Welcome, what do you want.\n\n1. Helm 250$\n2. Chestplate 500$\n3. Legs 400$\n4. Boots 200$\n5. Go back\n>";
					cin >> item;
					if(item == 1){
						if(balance < 250){
							cout << "Not enough balance. \n";
							Sleep(2000);
							system("CLS");
						}else if(balance >= 250){
							balance -= 250;
							cout << "Here's your helm! you now get +1 ore. Your balance is > " << balance << "$ \n";
							copperGot += 1;
							Sleep(1500);
							system("CLS");
						}
					}else if(item == 2){
                        if(balance < 500){
                            cout << "Not enough balance. \n";
                            Sleep(2000);
                            system("CLS");
                        }
                        else if(balance >= 500){
                            balance -= 500;
                            cout << "Here's your chestplate, now you get +1 ore. Your balance is > " << balance << "$ \n";
                            copperGot += 1;
                            Sleep(1500);
							system("CLS");
                        }
					}else if(item == 3){
                        if(balance < 400){
                            cout << "Not enough balance. \n";
                            Sleep(2000);
                            system("ClS");
                        }else if(balance >= 400){
                            balance -= 400;
                            cout << "Here are your legs, now you get +1 ore. Your balance is > " << balance << "$ \n";
                            copperGot += 1;
                            Sleep(1500);
							system("CLS");
                        }
					}else if(item == 4){
                        if(balance < 200){
                            cout << "Not enough balance. \n";
                            Sleep(2000);
                            system("CLS");
                        }else if(balance >= 200){
                            balance -= 200;
                            cout << "Here are your boots, you get now +0.5$ per ore. Your balance is > " << balance << "$ \n";
                            copperGot += 1;
                            Sleep(1500);
							system("CLS");
                        }
					}else if(item == 5){
                            cout << "Sending back.";
                            Sleep(1000);
                            system("CLS");
				}else if(item != 1 || 2 || 3 || 4 || 5){
                            cout << errorInput;
                            cin >> item;
				}

        }else if(shopWay == 4){
            Sleep(2000);
            system("CLS");
            cout << "Welcome, here, you can buy pickaxes, but these ones are much more cheaper than gear!\n\n";
            cout << "1. Copper pickaxe 900$\n2. Silver pickaxe 1500$\n3. Gold pickaxe 2,250$\n4. Emerald pickaxe 3,200$\n5. Diamond pickaxe 5,000$\n>";
            cin >> pickaxe;
            if(pickaxe == 1){
                if(balance < 900){
                    cout << "You don't have enough money!\n";
                    Sleep(2000);
                    system("CLS");
                }else if(balance >= 900){
                    balance -= 900;
                    copperGot += 2;
                    cout << "Here's your pickaxe, now you get +2 ores! Your current balancse is > " << balance << "$ \n";
                    Sleep(2000);
                    system("CLS");
                }
            }else if(pickaxe == 2){
                if(balance < 1500){
                    cout << "You don't have enough money!\n";
                    Sleep(2000);
                    system("CLS");
                }else if(balance >= 1500){
                    balance -= 1500;
                    cout << "Here is your pickaxe, now you get +2 ores! Your current balance is > " << balance << "$ \n";
                    copperGot += 2;
                    Sleep(2000);
                    system("CLS");
                }
            }else if(pickaxe == 3){
                if(balance < 2250){
                    cout << "You don't have enough money!\n";
                    Sleep(2000);
                    system("CLS");
                }else if(balance >= 2250){
                    balance -= 2250;
                    cout << "Here's your pickaxe, now you get +2 ores! Your current balance is > " << balance << "$ \n";
                    copperGot += 2;
                    Sleep(2000);
                    system("CLS");
                }
            }else if(pickaxe == 4){
                if(balance < 3200){
                    cout << "You don't have enough money!\n";
                    Sleep(2000);
                    system("CLS");
                }else if(balance >= 3200){
                    balance -= 3200;
                    cout << "Here's your pickaxe, now you get +2 ores! Your current balance is > " << balance << "$ \n";
                    copperGot += 2;
                    Sleep(2000);
                    system("CLS");
                }
            }else if(pickaxe == 5){
                if(balance < 5000){
                    cout << "You don't have enough money!\n";
                    Sleep(2000);
                    system("CLS");
                }else if(balance >= 5000){
                    balance -= 5000;
                    cout << "Here's your pickaxe, now you get +2 ores! Your current balance is > " << balance << "$ \n";
                    copperGot += 2;
                    Sleep(2000);
                    system("CLS");
                }
            }
        }else if(shopWay == 5){
                cout << endl;
				cout << "You are going mine..";
				Sleep(800);
				cout << "\nMining...." << endl;
				Sleep(1000);
				copperNow += copperGot;
				cout << "You have got > " << copperGot << " copper and your copper is > " << copperNow << ". \n" << endl;
				Sleep(2000);
				system("CLS");
        }else if(shopWay == 123456789){ //hidden help
            balance += 60000;
            system("CLS");
        }

		else if(startWay == 2){
			cout << "All rights goes to: SM. (Inicials).\n";
		}
		else if(startWay != 1 || 2){
			cout << "\nError, try again.\n\n";
		}
	 } //while loop
	}else if(marketWay != 1 || 2){
        cout << "Error \n>";
        cin >> marketWay;
	}
	} // while loop
	cout << "1. Mine\n2. Market\n";
	if(marketWay == 1){
		cout << "sda";
	}
}
}
}



